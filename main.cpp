//#include "PreProcessor.hpp"
#include "./LL.hpp"
#include <iostream>
#include <string>

int main(int argc,char *argv[]){
#if defined(StartSyntaxAnalysis)
    SyntaxAnalyzer Syntaxanalyzer(argv[1]);
    Syntaxanalyzer.BuildAST();
    BulidObejctCode(argv[1]);
    Syntaxanalyzer.ReOpenFile(argv[1]);
    Syntaxanalyzer.BuildAST();
    WriteInfo(assemble_file,"main");
  /*  for(auto iter:Anonymous_domain){
        std::cout << "Level: " << iter.first << std::endl;
        for(auto iter_:iter.second.value_info){
            std::cout << iter_.value_name << std::endl;
        }
    }*/
   /* for(auto iter:func_double_label){
        
        for(auto iter_:iter.second){
            std::cout << iter.first << " " << iter_.first << " " << iter_.second << std::flush;
        }
    }*/
   /* for(auto iter:localvalue["main"].value_info){
        std::cout << iter.value_name << std::endl;
    }*/
#elif defined(StartTokenAnalysis)
    TokenAnalyzer TokenAnalyzer;
    TokenAnalyzer.SetFileName(argv[1]);
    TOKEN token  = TokenAnalyzer.NextToken();
    while(!TokenAnalyzer.isEOF()){
        std::cout << token.tokenValue.StringValue << std::endl;
        token = TokenAnalyzer.NextToken();
    }
#elif defined(StartPreProcess)
    PreProcessor Preprocessor;
    Preprocessor.getFileName(argv[_FILENAME]);
    Preprocessor.setFileName(argv[_FILENAME]);
    Preprocessor.StartPreProcessor();
    Preprocessor.ClearFile();
#endif
    return 0;
}
