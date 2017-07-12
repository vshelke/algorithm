#define si(x) scanf("%d", &x)
#define ss(x) scanf("%s", x)
#define sf() getchar_unlocked()

int scan_d() {
	int ip=getchar_unlocked(),ret=0,flag=1;
	for(;ip<'0'||ip>'9';ip=getchar_unlocked())
		if(ip=='-'){
			flag=-1;
			ip=getchar_unlocked();
			break;
		}
	for(;ip>='0'&&ip<='9';ip=getchar_unlocked())
		ret=ret*10+ip-'0';
	return flag*ret;
}

ios_base::sync_with_stdio (false);
