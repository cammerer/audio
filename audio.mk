##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=audio
ConfigurationName      :=Debug
WorkspacePath          := "D:\CodeLite\test"
ProjectPath            := "D:\CodeLite\test\audio"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=sj
Date                   :=2013-1-3
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)__WX__ 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="D:\CodeLite\test\audio\audio.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
LinkOptions            :=  -mwindows $(shell wx-config --debug=yes --libs --unicode=yes --prefix=C:\wxWidgets-2.9.4)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)C:/wxWidgets-2.9.4/include $(IncludeSwitch)C:/wxWidgets-2.9.4/lib/gcc_dll/mswu 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)C:/wxWidgets-2.9.4/lib/gcc_dll 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -Wall -O0 $(shell wx-config --cxxflags --unicode=yes --debug=yes --prefix=C:\wxWidgets-2.9.4) $(Preprocessors)
CFLAGS   :=  -g -Wall -O0 $(shell wx-config --cxxflags --unicode=yes --debug=yes --prefix=C:\wxWidgets-2.9.4) $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
WXWIN:=C:\wxWidgets2.8
WXCFG:=gcc_dll\mswud
UNIT_TEST_PP_SRC_DIR:=C:\UnitTest++-1.3
Objects=$(IntermediateDirectory)/gui$(ObjectSuffix) $(IntermediateDirectory)/main$(ObjectSuffix) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects) > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/gui$(ObjectSuffix): gui.cpp $(IntermediateDirectory)/gui$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/CodeLite/test/audio/gui.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/gui$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/gui$(DependSuffix): gui.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/gui$(ObjectSuffix) -MF$(IntermediateDirectory)/gui$(DependSuffix) -MM "D:/CodeLite/test/audio/gui.cpp"

$(IntermediateDirectory)/gui$(PreprocessSuffix): gui.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/gui$(PreprocessSuffix) "D:/CodeLite/test/audio/gui.cpp"

$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/CodeLite/test/audio/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "D:/CodeLite/test/audio/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "D:/CodeLite/test/audio/main.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/gui$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/gui$(DependSuffix)
	$(RM) $(IntermediateDirectory)/gui$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "D:\CodeLite\test\.build-debug\audio"


