using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Start() {
        AndroidJavaObject jo = new AndroidJavaObject("java.lang.String", "ash.png");
    }
}
