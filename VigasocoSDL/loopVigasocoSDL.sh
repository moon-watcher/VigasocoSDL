#!/bin/bash
while true
do
  nice -15 ./VigasocoSDL abadia -input:libVigasocoFakeInputPlugin.so,FakeInputPlugin  -audio:libVigasocoNULLAudioPlugin.so,NULLAudioPlugin 2>&1 | tee -a /tmp/viga.log
  tail -40 /tmp/viga.log >> /tmp/VigasocoSDK.log
done