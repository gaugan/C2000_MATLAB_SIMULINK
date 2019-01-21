function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Blinky_ePWM_ADC.c:42c64"]=1;
    this.traceFlag["Blinky_ePWM_ADC.c:58c66"]=1;
    this.traceFlag["Blinky_ePWM_ADC.c:78c31"]=1;
    this.traceFlag["Blinky_ePWM_ADC.c:80c33"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Blinky_ePWM_ADC.c:42"]=1;
    this.lineTraceFlag["Blinky_ePWM_ADC.c:43"]=1;
    this.lineTraceFlag["Blinky_ePWM_ADC.c:58"]=1;
    this.lineTraceFlag["Blinky_ePWM_ADC.c:59"]=1;
    this.lineTraceFlag["Blinky_ePWM_ADC.c:77"]=1;
    this.lineTraceFlag["Blinky_ePWM_ADC.c:78"]=1;
    this.lineTraceFlag["Blinky_ePWM_ADC.c:79"]=1;
    this.lineTraceFlag["Blinky_ePWM_ADC.c:80"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
