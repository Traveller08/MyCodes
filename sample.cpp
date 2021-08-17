vl pw(n+5,0);
 pw[0] = 1;
 rep(i, 1, n+2, 1) pw[i] = (pw[i - 1] * p) % mod;
 vl pre_hash(n + 1, 0), suf_hash(n + 1, 0);
ll curr = 0, hash_value = 0;
rep(k,0,n,1)
{
hash_value = (hash_value + int(s[k]) * pw[curr]) % mod;
pre_hash[k] = hash_value;
curr++;
 }
hash_value = 0, curr = 0;
for (ll k = n - 1; k >= 0; k--)
{
hash_value = (hash_value + int(s[k]) * pw[curr]) % mod;
suf_hash[k] = hash_value;
curr++;
}
 i=0; j=0;
 while(j<n){
ll f_hash=pre_hash[j];
ll b_hash=j==n-1?suf_hash[i]:(suf_hash[i]-suf_hash[j+1]+mod)%mod;
 ll p1=0,p2=n-j-1;
p1<p2?f_hash=(f_hash*pw[p2-p1])%mod:b_hash=(b_hash*pw[p1-p2])%mod;
if(f_hash==b_hash){
}
j++;
}