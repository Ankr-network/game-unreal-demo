@echo %cd%
RD /S /Q "Binaries/"
#RD /S /Q "Build/"
RD /S /Q ".vs/"
RD /S /Q "Intermediate/"
RD /S /Q "Saved/"
RD /S /Q "DerivedDataCache/"
RD /S /Q "Script/"
RD /S /Q "Plugins/Mirage/Binaries/"
RD /S /Q "Plugins/Mirage/Intermediate/"
Del symbols.zip
Del MirageUnrealDemo.sln
exit