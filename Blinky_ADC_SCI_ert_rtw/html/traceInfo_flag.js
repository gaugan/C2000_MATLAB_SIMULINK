function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Blinky_ADC_SCI.c:42c62"]=1;
    this.traceFlag["Blinky_ADC_SCI.c:58c64"]=1;
    this.traceFlag["Blinky_ADC_SCI.c:78c30"]=1;
    this.traceFlag["Blinky_ADC_SCI.c:80c32"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Blinky_ADC_SCI.c:42"]=1;
    this.lineTraceFlag["Blinky_ADC_SCI.c:43"]=1;
    this.lineTraceFlag["Blinky_ADC_SCI.c:58"]=1;
    this.lineTraceFlag["Blinky_ADC_SCI.c:59"]=1;
    this.lineTraceFlag["Blinky_ADC_SCI.c:77"]=1;
    this.lineTraceFlag["Blinky_ADC_SCI.c:78"]=1;
    this.lineTraceFlag["Blinky_ADC_SCI.c:79"]=1;
    this.lineTraceFlag["Blinky_ADC_SCI.c:80"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
