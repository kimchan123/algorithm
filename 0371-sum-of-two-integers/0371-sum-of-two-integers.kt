class Solution {
    fun getSum(a: Int, b: Int): Int =
        if (b==0) {a} else {getSum(a xor b, (a and b) shl 1)}
    
    
    //a^b : xor 연산 -> 자리수 오르는 것을 제외한 덧셈 가능
    //(a & b) << 1 -> 자리수 오르는 것을 보정 가능
}