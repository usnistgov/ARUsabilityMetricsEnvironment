using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OvenController : MonoBehaviour
{
    private float mFirePercentage = 100.0f;
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
        mFirePercentage = 100.0f;
    }

    public void DecreaseFire()
    {
        mFirePercentage -= 0.01f;
    }

    public bool IsFireOut()
    {
        return mFirePercentage <= 0.0f;
    }
}
