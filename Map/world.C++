using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Start() {
        AndroidJavaObject jo = new AndroidJavaObject("java.lang.String", "world.obj");
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Start() {
        int width = 300;
        int height = 150;
        AndroidJavaObject jo = new AndroidJavaObject("android/view/ViewGroup$LayoutParams", 1000, 30);
    }
}
