function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/ADCINA3 - Vout F//B */
	this.urlHashMap["Trial1:24"] = "Trial1.c:35,112&Trial1.h:56";
	/* <Root>/ADCINB3 - Vin F//B */
	this.urlHashMap["Trial1:25"] = "Trial1.c:60,117&Trial1.h:57";
	/* <Root>/Duty Value 
Generation */
	this.urlHashMap["Trial1:21"] = "msg=&block=Trial1:21";
	/* <Root>/Duty control for Active Load  */
	this.urlHashMap["Trial1:2"] = "Trial1.c:328";
	/* <Root>/High-Low Side Driver Signal */
	this.urlHashMap["Trial1:1"] = "Trial1.c:92,122";
	/* <Root>/Vin_eCAN_XMIT */
	this.urlHashMap["Trial1:27"] = "Trial1.c:67";
	/* <Root>/Vout_Set */
	this.urlHashMap["Trial1:14"] = "Trial1.c:86&Trial1.h:63&Trial1_data.c:25";
	/* <Root>/Vout_eCAN_XMIT */
	this.urlHashMap["Trial1:26"] = "Trial1.c:42";
	/* <S1>/In1 */
	this.urlHashMap["Trial1:22"] = "msg=&block=Trial1:22";
	/* <S1>/Duty */
	this.urlHashMap["Trial1:8"] = "Trial1.c:87&Trial1.h:69&Trial1_data.c:31";
	/* <S1>/Gain */
	this.urlHashMap["Trial1:12"] = "Trial1.c:88&Trial1.h:66&Trial1_data.c:28";
	/* <S1>/Sum */
	this.urlHashMap["Trial1:13"] = "Trial1.c:85";
	/* <S1>/Out1 */
	this.urlHashMap["Trial1:23"] = "msg=&block=Trial1:23";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Trial1"};
	this.sidHashMap["Trial1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Trial1:21"};
	this.sidHashMap["Trial1:21"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/ADCINA3 - Vout F//B"] = {sid: "Trial1:24"};
	this.sidHashMap["Trial1:24"] = {rtwname: "<Root>/ADCINA3 - Vout F//B"};
	this.rtwnameHashMap["<Root>/ADCINB3 - Vin F//B"] = {sid: "Trial1:25"};
	this.sidHashMap["Trial1:25"] = {rtwname: "<Root>/ADCINB3 - Vin F//B"};
	this.rtwnameHashMap["<Root>/Duty Value  Generation"] = {sid: "Trial1:21"};
	this.sidHashMap["Trial1:21"] = {rtwname: "<Root>/Duty Value  Generation"};
	this.rtwnameHashMap["<Root>/Duty control for Active Load "] = {sid: "Trial1:2"};
	this.sidHashMap["Trial1:2"] = {rtwname: "<Root>/Duty control for Active Load "};
	this.rtwnameHashMap["<Root>/High-Low Side Driver Signal"] = {sid: "Trial1:1"};
	this.sidHashMap["Trial1:1"] = {rtwname: "<Root>/High-Low Side Driver Signal"};
	this.rtwnameHashMap["<Root>/Vin_eCAN_XMIT"] = {sid: "Trial1:27"};
	this.sidHashMap["Trial1:27"] = {rtwname: "<Root>/Vin_eCAN_XMIT"};
	this.rtwnameHashMap["<Root>/Vout_Set"] = {sid: "Trial1:14"};
	this.sidHashMap["Trial1:14"] = {rtwname: "<Root>/Vout_Set"};
	this.rtwnameHashMap["<Root>/Vout_eCAN_XMIT"] = {sid: "Trial1:26"};
	this.sidHashMap["Trial1:26"] = {rtwname: "<Root>/Vout_eCAN_XMIT"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Trial1:22"};
	this.sidHashMap["Trial1:22"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Duty"] = {sid: "Trial1:8"};
	this.sidHashMap["Trial1:8"] = {rtwname: "<S1>/Duty"};
	this.rtwnameHashMap["<S1>/Gain"] = {sid: "Trial1:12"};
	this.sidHashMap["Trial1:12"] = {rtwname: "<S1>/Gain"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "Trial1:13"};
	this.sidHashMap["Trial1:13"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Trial1:23"};
	this.sidHashMap["Trial1:23"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
