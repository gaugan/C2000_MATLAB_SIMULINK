function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/ADCINA3 - Vout F//B */
	this.urlHashMap["Trial2:24"] = "Trial2.c:40,175&Trial2.h:59";
	/* <Root>/ADCINB3 - Vin F//B */
	this.urlHashMap["Trial2:25"] = "Trial2.c:114,386&Trial2.h:60";
	/* <Root>/Analog Gain */
	this.urlHashMap["Trial2:43"] = "Trial2.c:62&Trial2.h:90&Trial2_data.c:43";
	/* <Root>/Duty control for Active Load  */
	this.urlHashMap["Trial2:2"] = "Trial2.c:391";
	/* <Root>/High-Low Side Driver Signal */
	this.urlHashMap["Trial2:1"] = "Trial2.c:86,180";
	/* <Root>/PI Controller */
	this.urlHashMap["Trial2:54"] = "msg=&block=Trial2:54";
	/* <Root>/Sum */
	this.urlHashMap["Trial2:42"] = "Trial2.c:60";
	/* <Root>/Vin_Gain */
	this.urlHashMap["Trial2:39"] = "Trial2.c:121,132&Trial2.h:61,99&Trial2_data.c:52";
	/* <Root>/Vin_eCAN_XMIT */
	this.urlHashMap["Trial2:27"] = "Trial2.c:134";
	/* <Root>/Vout_Gain */
	this.urlHashMap["Trial2:38"] = "Trial2.c:47,58&Trial2.h:87&Trial2_data.c:40";
	/* <Root>/Vout_Ref */
	this.urlHashMap["Trial2:14"] = "Trial2.c:61&Trial2.h:84&Trial2_data.c:37";
	/* <Root>/Vout_eCAN_XMIT */
	this.urlHashMap["Trial2:26"] = "Trial2.c:93";
	/* <S1>/u */
	this.urlHashMap["Trial2:54:1"] = "msg=&block=Trial2:54:1";
	/* <S1>/Integral Gain */
	this.urlHashMap["Trial2:54:1680"] = "Trial2.c:111&Trial2.h:72&Trial2_data.c:25";
	/* <S1>/Integrator */
	this.urlHashMap["Trial2:54:1681"] = "Trial2.c:67,152,597&Trial2.h:66,93,96&Trial2_data.c:46,49";
	/* <S1>/Proportional Gain */
	this.urlHashMap["Trial2:54:1679"] = "Trial2.c:71&Trial2.h:78&Trial2_data.c:31";
	/* <S1>/Saturate */
	this.urlHashMap["Trial2:54:1682"] = "Trial2.c:75,84&Trial2.h:75,81&Trial2_data.c:28,34";
	/* <S1>/Sum */
	this.urlHashMap["Trial2:54:1678"] = "Trial2.c:70";
	/* <S1>/y */
	this.urlHashMap["Trial2:54:10"] = "msg=&block=Trial2:54:10";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Trial2"};
	this.sidHashMap["Trial2"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Trial2:54"};
	this.sidHashMap["Trial2:54"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/ADCINA3 - Vout F//B"] = {sid: "Trial2:24"};
	this.sidHashMap["Trial2:24"] = {rtwname: "<Root>/ADCINA3 - Vout F//B"};
	this.rtwnameHashMap["<Root>/ADCINB3 - Vin F//B"] = {sid: "Trial2:25"};
	this.sidHashMap["Trial2:25"] = {rtwname: "<Root>/ADCINB3 - Vin F//B"};
	this.rtwnameHashMap["<Root>/Analog Gain"] = {sid: "Trial2:43"};
	this.sidHashMap["Trial2:43"] = {rtwname: "<Root>/Analog Gain"};
	this.rtwnameHashMap["<Root>/Duty control for Active Load "] = {sid: "Trial2:2"};
	this.sidHashMap["Trial2:2"] = {rtwname: "<Root>/Duty control for Active Load "};
	this.rtwnameHashMap["<Root>/High-Low Side Driver Signal"] = {sid: "Trial2:1"};
	this.sidHashMap["Trial2:1"] = {rtwname: "<Root>/High-Low Side Driver Signal"};
	this.rtwnameHashMap["<Root>/PI Controller"] = {sid: "Trial2:54"};
	this.sidHashMap["Trial2:54"] = {rtwname: "<Root>/PI Controller"};
	this.rtwnameHashMap["<Root>/Sum"] = {sid: "Trial2:42"};
	this.sidHashMap["Trial2:42"] = {rtwname: "<Root>/Sum"};
	this.rtwnameHashMap["<Root>/Vin_Gain"] = {sid: "Trial2:39"};
	this.sidHashMap["Trial2:39"] = {rtwname: "<Root>/Vin_Gain"};
	this.rtwnameHashMap["<Root>/Vin_eCAN_XMIT"] = {sid: "Trial2:27"};
	this.sidHashMap["Trial2:27"] = {rtwname: "<Root>/Vin_eCAN_XMIT"};
	this.rtwnameHashMap["<Root>/Vout_Gain"] = {sid: "Trial2:38"};
	this.sidHashMap["Trial2:38"] = {rtwname: "<Root>/Vout_Gain"};
	this.rtwnameHashMap["<Root>/Vout_Ref"] = {sid: "Trial2:14"};
	this.sidHashMap["Trial2:14"] = {rtwname: "<Root>/Vout_Ref"};
	this.rtwnameHashMap["<Root>/Vout_eCAN_XMIT"] = {sid: "Trial2:26"};
	this.sidHashMap["Trial2:26"] = {rtwname: "<Root>/Vout_eCAN_XMIT"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "Trial2:54:1"};
	this.sidHashMap["Trial2:54:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Integral Gain"] = {sid: "Trial2:54:1680"};
	this.sidHashMap["Trial2:54:1680"] = {rtwname: "<S1>/Integral Gain"};
	this.rtwnameHashMap["<S1>/Integrator"] = {sid: "Trial2:54:1681"};
	this.sidHashMap["Trial2:54:1681"] = {rtwname: "<S1>/Integrator"};
	this.rtwnameHashMap["<S1>/Proportional Gain"] = {sid: "Trial2:54:1679"};
	this.sidHashMap["Trial2:54:1679"] = {rtwname: "<S1>/Proportional Gain"};
	this.rtwnameHashMap["<S1>/Saturate"] = {sid: "Trial2:54:1682"};
	this.sidHashMap["Trial2:54:1682"] = {rtwname: "<S1>/Saturate"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "Trial2:54:1678"};
	this.sidHashMap["Trial2:54:1678"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "Trial2:54:10"};
	this.sidHashMap["Trial2:54:10"] = {rtwname: "<S1>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
