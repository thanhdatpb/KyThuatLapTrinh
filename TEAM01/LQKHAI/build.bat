# bao gồm < iostream >
# include < stdio.h >
# bao gồm  " .. \ .. \ _ src \ Utils.h "
# bao gồm  " .. \ .. \ _ src \ Log.h "
sử dụng  không gian tên  std ;
int  main ()
{
    char ten [] = " Le Quang Khai " ;
    char lop [] = "  KTLT -K45 -F " ;
    int thang = 3 ;
    int nam = 2022 ;
    std :: string name = StringFormat ( " % s% s% 02d% 04d " , ten, lop, thang, nam);
    LOG_IT ( " % s \ n " , tên. C_str ());
    std :: vector <std :: string> arrName = SplitString (name. c_str (), "  " );
    int iCnt = ( int ) arrName. kích thước ();
    for ( int i = 0 ; i <iCnt; i ++)
    LOG_WT ( " % d [% s] \ n " , i, arrName [i]. C_str ());
    
    trả về  0 ;
}