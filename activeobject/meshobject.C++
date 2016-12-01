using UnityEngine;
using System.Collections;

public class GetComponentInParentExample : MonoBehaviour
{
    // Disable the spring on the first HingeJoint component found on any parent object

    void Start( )
    {
        HingeJoint hinge = gameObject.GetComponentInParent( typeof(HingeJoint) ) as HingeJoint;

        if( hinge != null )
            hinge.useSpring = false;
    }
}
attach();player
