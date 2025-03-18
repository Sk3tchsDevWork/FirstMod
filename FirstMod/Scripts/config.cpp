class CfgPatches
{
	class MT_Scripts
	{
		requiredAddons[] = { "DZ_Scripts" };
	};
};

class CfgAddons
{
    class PreloadAddons
    {
        class FirstMod
        {
            list[]={};
        };
    };
};

class CfgMods
{
    class FirstMod
    {
        name="";
        dir="FirstMod";
        picture="";
        action="";
        author="";
        overview = "";
		inputs = "";
		type = "mod";
        defines[] = {};

        class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class widgetStyles
			{
				files[]= {};
			};

			class engineScriptModule 
			{ 
				files[] = { "FirstMod/Scripts/1_Core"};
			};

			class gameScriptModule
			{
				files[] = { "FirstMod/Scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "FirstMod/Scripts/4_World" };
			};

			class missionScriptModule 
			{
				files[] = { "FirstMod/Scripts/5_Mission" };
			};
		};
    };
};
