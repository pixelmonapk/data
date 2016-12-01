using UnityEngine;
using UnityEditor;

public class CreateFolderExample : MonoBehaviour
{
	[MenuItem("GameObject/Create Folder")]
	static void CreateMaterial()
	{
		string guid = AssetDatabase.CreateFolder( "Assets", "obb" );
		string newFolderPath = AssetDatabase.GUIDToAssetPath( guid );
	}
}
