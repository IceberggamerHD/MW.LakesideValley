class vehicleMenu{
    idd = 9919;
    movingEnable = false;

    class controls{

    	////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by IceN, v1.063, #Rugozi)
		////////////////////////////////////////////////////////

		class vehiclePic: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.250625 * safezoneW + safezoneX;
			y = 0.206 * safezoneH + safezoneY;
			w = 0.49875 * safezoneW;
			h = 0.56 * safezoneH;
		};
		class vehicleBtn_ProcurarMatricula: RscButton
		{
			idc = 1600;
			text = "Procurar Matricula"; //--- ToDo: Localize;
			x = 0.591875 * safezoneW + safezoneX;
			y = 0.598 * safezoneH + safezoneY;
			w = 0.118125 * safezoneW;
			h = 0.084 * safezoneH;
		};
		class vehicleBtn_FecharMenu: RscButton
		{
			idc = 1601;
			text = "Sair"; //--- ToDo: Localize;
			x = 0.591875 * safezoneW + safezoneX;
			y = 0.71 * safezoneH + safezoneY;
			w = 0.118125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class vehicleBtn_WantedList: RscButton
		{
			idc = 1602;
			text = "Procurar Criminosos"; //--- ToDo: Localize;
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