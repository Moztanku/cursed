#define import ;using namespace
#define alias ;using
#define system std

#define True true
#define False false
#define None nullptr
#define Nan std::numeric_limits<double>::quiet_NaN()
#define Inf std::numeric_limits<double>::infinity()

#define main int main(int argc, char* argv[], char* envp[]){
#define end ;return 0; }
#define var ;auto
#define val ;const auto
#define arg auto
#define ret(...) ;return __VA_ARGS__; }
#define call ;

#define ass ;
#define to =
#define eq ==
#define neq !=
#define gt >
#define lt <

#define if ;if(
#define then ){
#define else ;}else{
#define elif ;}else if(
#define endif ;}

#define while ;while(
#define do ){
#define done ;}

#define switch(x) ;switch(x){
#define case(x) ;break;case x: 
#define default ;break;default:
#define endswitch ;}

#define gen(...) template<__VA_ARGS__>
#define type typename

#define for ;for( auto 
#define in :
#define range(...) std::ranges::views::iota(__VA_ARGS__)

#define inc ;++
#define dec ;--

#define fun auto

#define is {

#define print ;_print