function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/ADC */
	this.urlHashMap["Blinky_ePWM_ADC:67"] = "Blinky_ePWM_ADC.c:32,100&Blinky_ePWM_ADC.h:51";
	/* <Root>/Display 
'L' */
	this.urlHashMap["Blinky_ePWM_ADC:57"] = "msg=rtwMsg_illegalCharacter&block=Blinky_ePWM_ADC:57";
	/* <Root>/Display 
'M' */
	this.urlHashMap["Blinky_ePWM_ADC:58"] = "msg=rtwMsg_illegalCharacter&block=Blinky_ePWM_ADC:58";
	/* <Root>/LED0 */
	this.urlHashMap["Blinky_ePWM_ADC:68"] = "Blinky_ePWM_ADC.c:45,105";
	/* <Root>/LED1 */
	this.urlHashMap["Blinky_ePWM_ADC:69"] = "Blinky_ePWM_ADC.c:50,111";
	/* <Root>/LED2 */
	this.urlHashMap["Blinky_ePWM_ADC:70"] = "Blinky_ePWM_ADC.c:61,117";
	/* <Root>/LED3 */
	this.urlHashMap["Blinky_ePWM_ADC:71"] = "Blinky_ePWM_ADC.c:66,123";
	/* <Root>/Product1 */
	this.urlHashMap["Blinky_ePWM_ADC:59"] = "Blinky_ePWM_ADC.c:74";
	/* <Root>/Product2 */
	this.urlHashMap["Blinky_ePWM_ADC:60"] = "Blinky_ePWM_ADC.c:75";
	/* <Root>/SCI Transmit */
	this.urlHashMap["Blinky_ePWM_ADC:72"] = "Blinky_ePWM_ADC.c:82";
	/* <S1>/Compare */
	this.urlHashMap["Blinky_ePWM_ADC:62:2"] = "Blinky_ePWM_ADC.c:55&Blinky_ePWM_ADC.h:53";
	/* <S1>/Constant */
	this.urlHashMap["Blinky_ePWM_ADC:62:3"] = "Blinky_ePWM_ADC.c:56&Blinky_ePWM_ADC.h:62&Blinky_ePWM_ADC_data.c:28";
	/* <S2>/Compare */
	this.urlHashMap["Blinky_ePWM_ADC:63:2"] = "Blinky_ePWM_ADC.c:39&Blinky_ePWM_ADC.h:52";
	/* <S2>/Constant */
	this.urlHashMap["Blinky_ePWM_ADC:63:3"] = "Blinky_ePWM_ADC.c:40&Blinky_ePWM_ADC.h:59&Blinky_ePWM_ADC_data.c:25";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Blinky_ePWM_ADC"};
	this.sidHashMap["Blinky_ePWM_ADC"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Blinky_ePWM_ADC:62"};
	this.sidHashMap["Blinky_ePWM_ADC:62"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Blinky_ePWM_ADC:63"};
	this.sidHashMap["Blinky_ePWM_ADC:63"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/ADC"] = {sid: "Blinky_ePWM_ADC:67"};
	this.sidHashMap["Blinky_ePWM_ADC:67"] = {rtwname: "<Root>/ADC"};
	this.rtwnameHashMap["<Root>/Display  'L'"] = {sid: "Blinky_ePWM_ADC:57"};
	this.sidHashMap["Blinky_ePWM_ADC:57"] = {rtwname: "<Root>/Display  'L'"};
	this.rtwnameHashMap["<Root>/Display  'M'"] = {sid: "Blinky_ePWM_ADC:58"};
	this.sidHashMap["Blinky_ePWM_ADC:58"] = {rtwname: "<Root>/Display  'M'"};
	this.rtwnameHashMap["<Root>/LED0"] = {sid: "Blinky_ePWM_ADC:68"};
	this.sidHashMap["Blinky_ePWM_ADC:68"] = {rtwname: "<Root>/LED0"};
	this.rtwnameHashMap["<Root>/LED1"] = {sid: "Blinky_ePWM_ADC:69"};
	this.sidHashMap["Blinky_ePWM_ADC:69"] = {rtwname: "<Root>/LED1"};
	this.rtwnameHashMap["<Root>/LED2"] = {sid: "Blinky_ePWM_ADC:70"};
	this.sidHashMap["Blinky_ePWM_ADC:70"] = {rtwname: "<Root>/LED2"};
	this.rtwnameHashMap["<Root>/LED3"] = {sid: "Blinky_ePWM_ADC:71"};
	this.sidHashMap["Blinky_ePWM_ADC:71"] = {rtwname: "<Root>/LED3"};
	this.rtwnameHashMap["<Root>/Mux"] = {sid: "Blinky_ePWM_ADC:76"};
	this.sidHashMap["Blinky_ePWM_ADC:76"] = {rtwname: "<Root>/Mux"};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "Blinky_ePWM_ADC:59"};
	this.sidHashMap["Blinky_ePWM_ADC:59"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/Product2"] = {sid: "Blinky_ePWM_ADC:60"};
	this.sidHashMap["Blinky_ePWM_ADC:60"] = {rtwname: "<Root>/Product2"};
	this.rtwnameHashMap["<Root>/SCI Transmit"] = {sid: "Blinky_ePWM_ADC:72"};
	this.sidHashMap["Blinky_ePWM_ADC:72"] = {rtwname: "<Root>/SCI Transmit"};
	this.rtwnameHashMap["<Root>/Sample greater than mid-value"] = {sid: "Blinky_ePWM_ADC:62"};
	this.sidHashMap["Blinky_ePWM_ADC:62"] = {rtwname: "<Root>/Sample greater than mid-value"};
	this.rtwnameHashMap["<Root>/Sample less than mid-value"] = {sid: "Blinky_ePWM_ADC:63"};
	this.sidHashMap["Blinky_ePWM_ADC:63"] = {rtwname: "<Root>/Sample less than mid-value"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "Blinky_ePWM_ADC:62:1"};
	this.sidHashMap["Blinky_ePWM_ADC:62:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "Blinky_ePWM_ADC:62:2"};
	this.sidHashMap["Blinky_ePWM_ADC:62:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "Blinky_ePWM_ADC:62:3"};
	this.sidHashMap["Blinky_ePWM_ADC:62:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "Blinky_ePWM_ADC:62:4"};
	this.sidHashMap["Blinky_ePWM_ADC:62:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "Blinky_ePWM_ADC:63:1"};
	this.sidHashMap["Blinky_ePWM_ADC:63:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "Blinky_ePWM_ADC:63:2"};
	this.sidHashMap["Blinky_ePWM_ADC:63:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "Blinky_ePWM_ADC:63:3"};
	this.sidHashMap["Blinky_ePWM_ADC:63:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "Blinky_ePWM_ADC:63:4"};
	this.sidHashMap["Blinky_ePWM_ADC:63:4"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
