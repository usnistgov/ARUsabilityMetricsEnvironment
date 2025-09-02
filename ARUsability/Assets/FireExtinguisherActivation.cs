using System.Collections;
using System.Collections.Generic;
using Obi;
using UnityEngine;

public class FireExtinguisherActivation : MonoBehaviour
{
    [SerializeField]
    private ObiSolver solver;
    private bool isEnabled = true;

    // Start is called before the first frame update
    void Start()
    {
        solver.enabled = isEnabled;
    }

    // Update is called once per frame
    void Update()
    {
        if (isEnabled && !solver.enabled) solver.enabled = true;
        if (!isEnabled && solver.enabled) solver.enabled = false;

        /*
        if(Input.GetKey(KeyCode.Space))
        {
            solver.enabled = !solver.enabled;
        }
        */
    }

    public void StartWater()
    {
        isEnabled = true;
    }

    public void StopWater()
    {
        isEnabled = false;
    }
}
