typedef char *str[10];
int main(void){
    short a = 10;
    a *= 10.5;
    float bv = 12.3;
   // str_ = str2;
/*	float b;
	float d;
	b = c;
	c = b;*/
}
/*
            std::string register_ = WhichRegisterFree();
                std::string XmmRegister = WhichXmmFree() ;
                std::string dest_offset_str,src_offset_str;
                getOffset(src_offset_str,value_.value_name);
                getOffset(dest_offset_str,id_name);

                if(statement_type & char_mask){
                    if(statement_type & pointer_mask){
                        ;
                    }
                    else if(statement_type & array_mask){
                        assemble_file << "\tmovzbl\t" << src_offset_str << ",\%eax"  << std::endl;
                        assemble_file << "\tmovb\t" << "\%al" << "," << dest_offset_str << std::endl;                        
                    }
                    else{
                        assemble_file << "\tmovb\t" << src_offset_str << "," << register_ << std::endl;
                        assemble_file << "\tmovb\t" << register_ << "," << dest_offset_str << std::endl;
                    }
                }
*/