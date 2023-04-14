using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OvenController : MonoBehaviour
{
    [SerializeField]
    private ParticleSystem fireParticleSystem;

    private float mFireScale = 1.0f;
    // Start is called before the first frame update
    void Start()
    {
        ResetFire();
    }

    // Update is called once per frame
    void Update()
    {
        // update the particle...
       

    }

    public void ResetFire()
    {
        mFireScale = 1.0f;
    }

    public void DecreaseFire()
    {
        mFireScale -= 0.001f;
        if (mFireScale < 0) mFireScale = 0;

         var main = fireParticleSystem.main;
        main.scalingMode = ParticleSystemScalingMode.Local;
        fireParticleSystem.transform.localScale = new Vector3(mFireScale, mFireScale, mFireScale);
        /*
        var main = fireParticleSystem.main;
        main.startLifetime = mFirePercentage;

        fireParticleSystem.Stop();
        fireParticleSystem.Play();
        //fireParticleSystem.startLifetime = mFirePercentage;
        fireParticleSystem.main.startLifetime = mFirePercentage;
        if (mFirePercentage < 0.0)
            mFirePercentage = 0.0F;
        */
    }

    public bool IsFireOut()
    {
        return mFireScale <= 0.0f;
    }
}
