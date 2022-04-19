# include  < bits / stdc ++. h >
# bao gồm  " ../../_src/Log.h "
sử dụng  không gian tên  std ;
# định  nghĩa  dài  dài
int  Eratos ( int n) {
    for ( int i = 2 ; i <= sqrt (n); i ++) {
        if (n% i == 0 ) trả về  0 ;
    }
    trả về n> 1 ;
}
void  Res (string & s) {
    for ( int i = 0 ; i <s. size (); i ++) {
        ll ans = 0 ;
        while ( isdigit (s [i])) {
            ans = ans * 10 + s [i] - ' 0 ' ;
            i ++;
        }
        if ( Eratos (ans)) cout << ans << "  " ;
    }
}
void  Đầu ra () {
    dây;
    LOG_ET ( " Bai: Loc so nguyen to trong xau \ n " );
    LOG_WT ( " Ten: Le Quang Khai \ n " );
    LOG_IT ( " Mã sv: 21T1020204 \ n " );
    LOG_DT ( " _____ \ n " );
    LOG_ET ( " Nhap chuoi: " ); getline (cin, s);
    LOG_WT ( " So nguyen to: " ); Res (s);
}
int  main () {
    ios_base :: sync_with_stdio ( 0 ); cin. hòa ( 0 ); cout. hòa ( 0 );
    Đầu ra ();
    trả về  0 ;
}

