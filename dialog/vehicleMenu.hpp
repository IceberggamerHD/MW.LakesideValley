class vehicleMenu{

    idd = 9919;
    movingEnable = false;
    enableSimulation = true;

    class controls{

    	////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by IceN, v1.063, #Rugozi)
		////////////////////////////////////////////////////////

		class vehiclePic: RscPicture
		{
			idc = 9920;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.250625 * safezoneW + safezoneX;
			y = 0.206 * safezoneH + safezoneY;
			w = 0.49875 * safezoneW;
			h = 0.56 * safezoneH;
		};
		class vehicleBtn_ProcurarMatricula: RscButton
		{
			idc = 9921;
			text = "Procurar Matricula"; //--- ToDo: Localize;
			x = 0.591875 * safezoneW + safezoneX;
			y = 0.598 * safezoneH + safezoneY;
			w = 0.118125 * safezoneW;
			h = 0.084 * safezoneH;
		};
		class vehicleBtn_FecharMenu: RscButton
		{
			idc = 9922;
			text = "Sair"; //--- ToDo: Localize;
			onButtonClick = "closeDialog 0;";
			x = 0.591875 * safezoneW + safezoneX;
			y = 0.71 * safezoneH + safezoneY;
			w = 0.118125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class vehicleBtn_WantedList: RscButton
		{
			idc = 9923;
			text = "Procurar Criminosos"; //--- ToDo: Localize;
			onButtonClick = "[] call life_fnc_wantedMenu";
			x = 0.434375 * safezoneW + safezoneX;
			y = 0.598 * safezoneH + safezoneY;
			w = 0.118125 * safezoneW;
			h = 0.084 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

    };

};