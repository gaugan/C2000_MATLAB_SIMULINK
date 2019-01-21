function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/ADCINA0 */
	this.urlHashMap["ADC_LED_CAN:13"] = "ADC_LED_CAN.c:32,126&ADC_LED_CAN.h:56";
	/* <Root>/BLUE LED */
	this.urlHashMap["ADC_LED_CAN:14"] = "ADC_LED_CAN.c:45,131";
	/* <Root>/CAN_MSG 
BLUE LED */
	this.urlHashMap["ADC_LED_CAN:32"] = "ADC_LED_CAN.c:62&ADC_LED_CAN.h:70&ADC_LED_CAN_data.c:31";
	/* <Root>/CAN_MSG 
RED LED */
	this.urlHashMap["ADC_LED_CAN:33"] = "ADC_LED_CAN.c:88&ADC_LED_CAN.h:73&ADC_LED_CAN_data.c:34";
	/* <Root>/Product1 */
	this.urlHashMap["ADC_LED_CAN:31"] = "ADC_LED_CAN.c:61";
	/* <Root>/Product2 */
	this.urlHashMap["ADC_LED_CAN:34"] = "ADC_LED_CAN.c:87&ADC_LED_CAN.h:55";
	/* <Root>/RED LED */
	this.urlHashMap["ADC_LED_CAN:18"] = "ADC_LED_CAN.c:56,137";
	/* <Root>/eCAN Transmit1 - BLUE LED */
	this.urlHashMap["ADC_LED_CAN:22"] = "ADC_LED_CAN.c:67";
	/* <Root>/eCAN Transmit2 - RED LED  */
	this.urlHashMap["ADC_LED_CAN:35"] = "ADC_LED_CAN.c:93";
	/* <S1>/Compare */
	this.urlHashMap["ADC_LED_CAN:20:2"] = "ADC_LED_CAN.c:50&ADC_LED_CAN.h:58";
	/* <S1>/Constant */
	this.urlHashMap["ADC_LED_CAN:20:3"] = "ADC_LED_CAN.c:51&ADC_LED_CAN.h:67&ADC_LED_CAN_data.c:28";
	/* <S2>/Compare */
	this.urlHashMap["ADC_LED_CAN:19:2"] = "ADC_LED_CAN.c:39&ADC_LED_CAN.h:57";
	/* <S2>/Constant */
	this.urlHashMap["ADC_LED_CAN:19:3"] = "ADC_LED_CAN.c:40&ADC_LED_CAN.h:64&ADC_LED_CAN_data.c:25";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ADC_LED_CAN"};
	this.sidHashMap["ADC_LED_CAN"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "ADC_LED_CAN:20"};
	this.sidHashMap["ADC_LED_CAN:20"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "ADC_LED_CAN:19"};
	this.sidHashMap["ADC_LED_CAN:19"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/ADCINA0"] = {sid: "ADC_LED_CAN:13"};
	this.sidHashMap["ADC_LED_CAN:13"] = {rtwname: "<Root>/ADCINA0"};
	this.rtwnameHashMap["<Root>/BLUE LED"] = {sid: "ADC_LED_CAN:14"};
	this.sidHashMap["ADC_LED_CAN:14"] = {rtwname: "<Root>/BLUE LED"};
	this.rtwnameHashMap["<Root>/CAN_MSG  BLUE LED"] = {sid: "ADC_LED_CAN:32"};
	this.sidHashMap["ADC_LED_CAN:32"] = {rtwname: "<Root>/CAN_MSG  BLUE LED"};
	this.rtwnameHashMap["<Root>/CAN_MSG  RED LED"] = {sid: "ADC_LED_CAN:33"};
	this.sidHashMap["ADC_LED_CAN:33"] = {rtwname: "<Root>/CAN_MSG  RED LED"};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "ADC_LED_CAN:31"};
	this.sidHashMap["ADC_LED_CAN:31"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/Product2"] = {sid: "ADC_LED_CAN:34"};
	this.sidHashMap["ADC_LED_CAN:34"] = {rtwname: "<Root>/Product2"};
	this.rtwnameHashMap["<Root>/RED LED"] = {sid: "ADC_LED_CAN:18"};
	this.sidHashMap["ADC_LED_CAN:18"] = {rtwname: "<Root>/RED LED"};
	this.rtwnameHashMap["<Root>/Sample greater than mid-value"] = {sid: "ADC_LED_CAN:20"};
	this.sidHashMap["ADC_LED_CAN:20"] = {rtwname: "<Root>/Sample greater than mid-value"};
	this.rtwnameHashMap["<Root>/Sample less than mid-value"] = {sid: "ADC_LED_CAN:19"};
	this.sidHashMap["ADC_LED_CAN:19"] = {rtwname: "<Root>/Sample less than mid-value"};
	this.rtwnameHashMap["<Root>/eCAN Transmit1 - BLUE LED"] = {sid: "ADC_LED_CAN:22"};
	this.sidHashMap["ADC_LED_CAN:22"] = {rtwname: "<Root>/eCAN Transmit1 - BLUE LED"};
	this.rtwnameHashMap["<Root>/eCAN Transmit2 - RED LED "] = {sid: "ADC_LED_CAN:35"};
	this.sidHashMap["ADC_LED_CAN:35"] = {rtwname: "<Root>/eCAN Transmit2 - RED LED "};
	this.rtwnameHashMap["<S1>/u"] = {sid: "ADC_LED_CAN:20:1"};
	this.sidHashMap["ADC_LED_CAN:20:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "ADC_LED_CAN:20:2"};
	this.sidHashMap["ADC_LED_CAN:20:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "ADC_LED_CAN:20:3"};
	this.sidHashMap["ADC_LED_CAN:20:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "ADC_LED_CAN:20:4"};
	this.sidHashMap["ADC_LED_CAN:20:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "ADC_LED_CAN:19:1"};
	this.sidHashMap["ADC_LED_CAN:19:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "ADC_LED_CAN:19:2"};
	this.sidHashMap["ADC_LED_CAN:19:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "ADC_LED_CAN:19:3"};
	this.sidHashMap["ADC_LED_CAN:19:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "ADC_LED_CAN:19:4"};
	this.sidHashMap["ADC_LED_CAN:19:4"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
