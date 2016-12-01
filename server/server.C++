using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void StartServer() {
        Network.InitializeServer(32, 25002);
        MasterServer.dedicatedServer = true;
        MasterServer.RegisterHost("MyUniqueGameType", "Pixelmon", "l33t game for all");
    }
}
