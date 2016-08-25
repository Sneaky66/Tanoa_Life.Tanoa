class Life_atm_management {
	idd = 2700;
	name= "life_atm_menu";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			idc = -1;

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		
		class MainBackground:Life_RscText {
			idc = -1;

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.3592 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.2816 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
	};
	
	class controls {
		class RscPicture_1200: RscPicture
		{
			text = "images\bank3.paa";
			x = 0.145766 * safezoneW + safezoneX;
			y = 0.07562 * safezoneH + safezoneY;
			w = 0.708333 * safezoneW;
			h = 0.850001 * safezoneH;
		};
		class BankTitle : Life_RscStructuredText
		{
			idc = 5521;
			text = "";
			
			x = 0.308187 * safezoneW + safezoneX;
			y = 0.3394 * safezoneH + safezoneY;
			w = 0.12118 * safezoneW;
			h = 0.0339999 * safezoneH;
		};
		class CashTitle : Life_RscStructuredText
		{
			idc = 2701;
			text = "";
			
			x = 0.553625 * safezoneW + safezoneX;
			y = 0.3372 * safezoneH + safezoneY;
			w = 0.12118 * safezoneW;
			h = 0.0339999 * safezoneH;
		};
		class WithdrawButton : RscButton 
		{
			idc = -1;
			text = "$STR_ATM_Withdraw";
			//colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_bankWithdraw";
			
			x = 0.236825 * safezoneW + safezoneX;
			y = 0.43224 * safezoneH + safezoneY;
			w = 0.0470485 * safezoneW;
			h = 0.0395556 * safezoneH;
		};
		
		class DepositButton : RscButton
		{
			idc = -1;
			text = "$STR_ATM_Deposit";
			//colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_bankDeposit";
			
			x = 0.236516 * safezoneW + safezoneX;
			y = 0.4989 * safezoneH + safezoneY;
			w = 0.0470485 * safezoneW;
			h = 0.0395556 * safezoneH;
		};
		
		class moneyEdit : Life_RscEdit {
		
			idc = 2702;
			
			text = "1";
			sizeEx = 0.030;
			x = 0.426162 * safezoneW + safezoneX;
			y = 0.39022 * safezoneH + safezoneY;
			w = 0.13768 * safezoneW;
			h = 0.029601 * safezoneH;
		
		};
		
		class PlayerList : Life_RscCombo 
		{
			idc = 2703;
			
			x = 0.5495 * safezoneW + safezoneX;
			y = 0.5066 * safezoneH + safezoneY;
			w = 0.13768 * safezoneW;
			h = 0.0339999 * safezoneH;
		};
		
		class TransferButton : RscButton
		{
			idc = -1;
	//		text = "$STR_ATM_Transfer";
			//colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_bankTransfer";
			
			x = 0.70625 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0470485 * safezoneW;
			h = 0.0395556 * safezoneH;
		};
		
		class GangDeposit : TransferButton
		{
			idc = 2705;
	//		text = "$STR_pInAct_DepositToGang";
	//		colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_gangDeposit";
			x = 0.237031 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0470485 * safezoneW;
			h = 0.0395556 * safezoneH;
		};
		
		class WithdrawGang: RscButton
		{
			idc = 1606;
			text = "Withdraw Gang"; //--- ToDo: Localize;
			onButtonClick = "[] call life_fnc_gangWithdraw";
			x = 0.237031 * safezoneW + safezoneX;
			y = 0.6364 * safezoneH + safezoneY;
			w = 0.0470485 * safezoneW;
			h = 0.0395556 * safezoneH;
		};
		
		class CloseButtonKey : RscButton {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.70625 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0470485 * safezoneW;
			h = 0.0395556 * safezoneH;
		};
		
		class DepositAllButton: RscButton {
			idc = 1604;
			text = "Deposit All"; //--- ToDo: Localize;
			onButtonClick = "[] call life_fnc_bankDepositAll";
			x = 0.70625 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0470485 * safezoneW;
			h = 0.0395556 * safezoneH;
		};
	};
};
