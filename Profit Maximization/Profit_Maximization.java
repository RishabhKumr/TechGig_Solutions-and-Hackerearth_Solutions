import java.util.*;
import java.io.*;
public class Profit_Maximization
{
public static void main(String[] args) throws IOException 
{
BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
PrintWriter wr = new PrintWriter(System.out);
 
    int n = Integer.parseInt(br.readLine().trim());
        String[] arr_p = br.readLine().split(" ");
        int[] p = new int[n];
        for (int i_p = 0; i_p < arr_p.length; i_p++) {
            p[i_p] = Integer.parseInt(arr_p[i_p]);
        }
 
        int out_ = solve(p);
        wr.println(out_);
 
        wr.close();
        br.close();
    }
 
    static int solve(int[] p)
{
 
int returningProfit= 0;
 
// Arrays.sort(p);
 
for(int x= p.length-1; x>=0; x--)
{
int currentVillage= 0;
int currentProfitGain= 0;
int runningProfit= 0;
 
for(int i= x; i>=0; i--)
{
if(i==x)
{
currentVillage= i;
runningProfit+= p[i];
currentProfitGain= p[i];
}
if(currentVillage>i&& currentProfitGain%p[i] ==0)
{
runningProfit+= p[i];
currentProfitGain= p[i];
currentVillage= i;
}
}
if(returningProfit<runningProfit)
// System.out.println(x+" returningProfit: "+returningProfit+" runningProfit: "+runningProfit);
returningProfit= returningProfit<runningProfit?runningProfit:returningProfit;
}
 
return returningProfit;
}
}