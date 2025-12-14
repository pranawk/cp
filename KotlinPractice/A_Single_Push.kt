//  A. Single Push

fun main(args: Array<String>) {
    val sc= java.util.Scanner(System.`in`)
    var tt=sc.nextInt()
    while(tt-->0){
        val n=sc.nextInt()
        val a= IntArray(n)
        val b= IntArray(n)
        for(i in 0..n-1)a[i]=sc.nextInt()
        for(i in 0..n-1)b[i]=sc.nextInt()
        var taken=false
        var ans=true
        var dif=0;
        for(i in 0..n-1){
            if(a[i]>b[i])ans=false
            if(dif!=0 && a[i]==b[i]){
                taken=true
                continue
            }
            if(taken==true && a[i]!=b[i])ans=false
            if(a[i]!=b[i] && dif==0)dif=a[i]-b[i]
            if(a[i]!=b[i] && dif!=0){
                if(dif!=a[i]-b[i])ans=false
            }
        }
        if(ans==true) println("YES")
        else println("NO")
    }
}