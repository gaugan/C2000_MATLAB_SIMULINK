function CodeDefine() { 
this.def = new Array();
this.def["IsrOverrun"] = {file: "ert_main_c.html",line:22,type:"var"};
this.def["OverrunFlag"] = {file: "ert_main_c.html",line:23,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:24,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:41,type:"fcn"};
this.def["Trial_M_"] = {file: "Trial_c.html",line:23,type:"var"};
this.def["Trial_M"] = {file: "Trial_c.html",line:24,type:"var"};
this.def["Trial_step"] = {file: "Trial_c.html",line:27,type:"fcn"};
this.def["Trial_initialize"] = {file: "Trial_c.html",line:38,type:"fcn"};
this.def["Trial_terminate"] = {file: "Trial_c.html",line:459,type:"fcn"};
this.def["Duty_Value"] = {file: "Trial_h.html",line:47,type:"var"};
this.def["P_Trial_T"] = {file: "Trial_types_h.html",line:24,type:"type"};
this.def["RT_MODEL_Trial_T"] = {file: "Trial_types_h.html",line:27,type:"type"};
this.def["Trial_P"] = {file: "Trial_data_c.html",line:23,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:59,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["int64_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["uint64_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:74,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:75,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:76,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:77,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["ulonglong_T"] = {file: "rtwtypes_h.html",line:79,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:80,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:81,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:82,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:92,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:97,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:137,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:144,type:"type"};
this.def["cint64_T"] = {file: "rtwtypes_h.html",line:151,type:"type"};
this.def["cuint64_T"] = {file: "rtwtypes_h.html",line:158,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:179,type:"type"};
this.def["init_board"] = {file: "MW_c28xx_board_c.html",line:8,type:"fcn"};
this.def["disableWatchdog"] = {file: "MW_c28xx_csl_c.html",line:8,type:"fcn"};
this.def["enable_interrupts"] = {file: "MW_c28xx_csl_c.html",line:16,type:"fcn"};
this.def["config_ePWM_GPIO"] = {file: "MW_c28xx_pwm_c.html",line:8,type:"fcn"};
this.def["getLoopbackIP"] = {file: "MW_target_hardware_resources_h.html",line:15,type:"var"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Trial_c.html"] = "../Trial.c";
	this.html2Root["Trial_c.html"] = "Trial_c.html";
	this.html2SrcPath["Trial_h.html"] = "../Trial.h";
	this.html2Root["Trial_h.html"] = "Trial_h.html";
	this.html2SrcPath["Trial_private_h.html"] = "../Trial_private.h";
	this.html2Root["Trial_private_h.html"] = "Trial_private_h.html";
	this.html2SrcPath["Trial_types_h.html"] = "../Trial_types.h";
	this.html2Root["Trial_types_h.html"] = "Trial_types_h.html";
	this.html2SrcPath["Trial_data_c.html"] = "../Trial_data.c";
	this.html2Root["Trial_data_c.html"] = "Trial_data_c.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["rtmodel_h.html"] = "../rtmodel.h";
	this.html2Root["rtmodel_h.html"] = "rtmodel_h.html";
	this.html2SrcPath["MW_c28xx_board_c.html"] = "../MW_c28xx_board.c";
	this.html2Root["MW_c28xx_board_c.html"] = "MW_c28xx_board_c.html";
	this.html2SrcPath["MW_c28xx_csl_c.html"] = "../MW_c28xx_csl.c";
	this.html2Root["MW_c28xx_csl_c.html"] = "MW_c28xx_csl_c.html";
	this.html2SrcPath["MW_c28xx_pie_h.html"] = "../MW_c28xx_pie.h";
	this.html2Root["MW_c28xx_pie_h.html"] = "MW_c28xx_pie_h.html";
	this.html2SrcPath["MW_c28xx_pwm_c.html"] = "../MW_c28xx_pwm.c";
	this.html2Root["MW_c28xx_pwm_c.html"] = "MW_c28xx_pwm_c.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Trial_c.html","Trial_h.html","Trial_private_h.html","Trial_types_h.html","Trial_data_c.html","rtwtypes_h.html","rtmodel_h.html","MW_c28xx_board_c.html","MW_c28xx_csl_c.html","MW_c28xx_pie_h.html","MW_c28xx_pwm_c.html","MW_target_hardware_resources_h.html"];