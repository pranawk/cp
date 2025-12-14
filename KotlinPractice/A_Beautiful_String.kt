//  A. Beautiful String
fun main(args: Array<String>) {
    val sc= java.util.Scanner(System.`in`)
    var t=sc.nextInt()
    while(t-->0){
        var s=sc.next().toCharArray()
        val n=s.size
        var fl= true
        if(s[0]=='?'){
            if(n>1&&s[1]!='a')s[0]='a'
            else s[0]='b'
        }
        if(s[n-1]=='?'){
            if(n-2>=0&&s[n-2]!='b')s[n-1]='b'
            else s[n-1]='c'
        }
        for(i in 0..n-2){
            if(s[i]!='?' && s[i]==s[i+1])fl=false
            if(s[i]=='?'){
                var j=i;
                while(j<n-1 && s[j]=='?')j++
                var x='a'
                var y='b'
                if(s[i-1]==s[j]){
                    if(s[i-1]=='a'){x='b' ; y='c'}
                    if(s[i-1]=='b'){x='a'; y='c'}
                    if(s[i-1]=='c'){x='a'; y='b'}
                }
                else{
                    x=s[i-1]
                    if(s[j]=='a' && x=='b')y='c'
                    if(s[j]=='a' && x=='c')y='b'
                    if(s[j]=='b' && x=='a')y='c'
                    if(s[j]=='b' && x=='c')y='a'
                    if(s[j]=='c' && x=='a')y='b'
                    if(s[j]=='c' && x=='b')y='a'
                }
                var fl2=0
                for(num in i..j-1){
                    if(fl2==0)s[num]=y
                    else s[num]=x
                    fl2=fl2 xor 1
                }
            }
        }
        if(fl==true)println(s)
        else println(-1)
    }
}