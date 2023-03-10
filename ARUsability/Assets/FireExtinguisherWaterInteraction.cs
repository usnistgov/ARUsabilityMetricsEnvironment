using UnityEngine;
using Obi;

[RequireComponent(typeof(ObiSolver))]
public class FireExtinguisherWaterInteraction : MonoBehaviour
{
    ObiSolver solver;
    public float antiGravityScale = 2;

    ObiSolver.ObiCollisionEventArgs collisionEvent;

    void Awake()
    {
        solver = GetComponent<ObiSolver>();
    }

    void OnEnable()
    {
        solver.OnCollision += Solver_OnCollision;
    }

    void OnDisable()
    {
        solver.OnCollision -= Solver_OnCollision;
    }

    void Solver_OnCollision(object sender, Obi.ObiSolver.ObiCollisionEventArgs e)
    {
        // calculate an acceleration that counteracts gravity:
        Vector4 antiGravityAccel = -(Vector4)solver.parameters.gravity * antiGravityScale * Time.deltaTime;

        var world = ObiColliderWorld.GetInstance();
        foreach (Oni.Contact contact in e.contacts)
        {
            // this one is an actual collision:
            if (contact.distance < 0.01)
            {
                ObiColliderBase col = world.colliderHandles[contact.bodyB].owner;

                // if this collider is tagged as "zero gravity":
                if (col != null && col.gameObject.CompareTag("Oven"))
                {
                    var particleSystem = col.gameObject.GetComponent<ParticleSystem>();


                    // get the index of the particle involved in the contact:
                    int particleIndex = solver.simplices[contact.bodyA];

                    // set the particle velocity:
                    // solver.velocities[particleIndex] += antiGravityAccel;
                }
            }
        }
    }
}

