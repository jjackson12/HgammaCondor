#!/bin/bash
while :; do condor_q  | nl | grep hakala >> condorWatch.tx; sleep 5; echo "" >> condorWatch.tx; echo "" >> condorWatch.tx ; done
