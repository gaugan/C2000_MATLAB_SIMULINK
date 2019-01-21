function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["Blinky_ePWM_eCAP:66"] = "Blinky_ePWM_eCAP.h:72&Blinky_ePWM_eCAP_data.c:28";
	/* <Root>/Digital Output */
	this.urlHashMap["Blinky_ePWM_eCAP:63"] = "Blinky_ePWM_eCAP.c:35,103";
	/* <Root>/Digital Output1 */
	this.urlHashMap["Blinky_ePWM_eCAP:65"] = "Blinky_ePWM_eCAP.c:40,109";
	/* <Root>/eCAN Transmit */
	this.urlHashMap["Blinky_ePWM_eCAP:54"] = "Blinky_ePWM_eCAP.c:75,115";
	/* <Root>/eCAP */
	this.urlHashMap["Blinky_ePWM_eCAP:41"] = "Blinky_ePWM_eCAP.c:45&Blinky_ePWM_eCAP.h:62";
	/* <Root>/eCAP as PWM */
	this.urlHashMap["Blinky_ePWM_eCAP:40"] = "msg=rtwMsg_notTraceable&block=Blinky_ePWM_eCAP:40";
	/* <Root>/ePWM */
	this.urlHashMap["Blinky_ePWM_eCAP:42"] = "Blinky_ePWM_eCAP.c:119";
	/* <S1>/Gain */
	this.urlHashMap["Blinky_ePWM_eCAP:55"] = "Blinky_ePWM_eCAP.c:51,73&Blinky_ePWM_eCAP.h:63,69&Blinky_ePWM_eCAP_data.c:25";
	/* <S1>/Reciprocal */
	this.urlHashMap["Blinky_ePWM_eCAP:57"] = "Blinky_ePWM_eCAP.c:52";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Blinky_ePWM_eCAP"};
	this.sidHashMap["Blinky_ePWM_eCAP"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Blinky_ePWM_eCAP:60"};
	this.sidHashMap["Blinky_ePWM_eCAP:60"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Blinky_ePWM_eCAP:66"};
	this.sidHashMap["Blinky_ePWM_eCAP:66"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Converter"] = {sid: "Blinky_ePWM_eCAP:60"};
	this.sidHashMap["Blinky_ePWM_eCAP:60"] = {rtwname: "<Root>/Converter"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "Blinky_ePWM_eCAP:63"};
	this.sidHashMap["Blinky_ePWM_eCAP:63"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Digital Output1"] = {sid: "Blinky_ePWM_eCAP:65"};
	this.sidHashMap["Blinky_ePWM_eCAP:65"] = {rtwname: "<Root>/Digital Output1"};
	this.rtwnameHashMap["<Root>/eCAN Transmit"] = {sid: "Blinky_ePWM_eCAP:54"};
	this.sidHashMap["Blinky_ePWM_eCAP:54"] = {rtwname: "<Root>/eCAN Transmit"};
	this.rtwnameHashMap["<Root>/eCAP"] = {sid: "Blinky_ePWM_eCAP:41"};
	this.sidHashMap["Blinky_ePWM_eCAP:41"] = {rtwname: "<Root>/eCAP"};
	this.rtwnameHashMap["<Root>/eCAP as PWM"] = {sid: "Blinky_ePWM_eCAP:40"};
	this.sidHashMap["Blinky_ePWM_eCAP:40"] = {rtwname: "<Root>/eCAP as PWM"};
	this.rtwnameHashMap["<Root>/ePWM"] = {sid: "Blinky_ePWM_eCAP:42"};
	this.sidHashMap["Blinky_ePWM_eCAP:42"] = {rtwname: "<Root>/ePWM"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Blinky_ePWM_eCAP:61"};
	this.sidHashMap["Blinky_ePWM_eCAP:61"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Gain"] = {sid: "Blinky_ePWM_eCAP:55"};
	this.sidHashMap["Blinky_ePWM_eCAP:55"] = {rtwname: "<S1>/Gain"};
	this.rtwnameHashMap["<S1>/Reciprocal"] = {sid: "Blinky_ePWM_eCAP:57"};
	this.sidHashMap["Blinky_ePWM_eCAP:57"] = {rtwname: "<S1>/Reciprocal"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Blinky_ePWM_eCAP:62"};
	this.sidHashMap["Blinky_ePWM_eCAP:62"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
