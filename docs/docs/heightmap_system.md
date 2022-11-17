Height Map System
-----------------


- Current holds an array of HeightMapFunctions
- This is limitted as it limits us functions with same params:
- instead hold enums as function
- write logic for each enum to grab correct data from passes array and process

- hold a map of <string, string> for different values


enum class EHeightMapFunctionType
{

}

struct pass
{
    FName Name;
    EHeightMapFunctionType Type;
    TMap<String, String> Values;
}