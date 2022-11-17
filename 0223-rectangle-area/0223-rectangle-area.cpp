class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
		int lbx=max(ax1,bx1);
		int lby=max(ay1,by1);
		int rtx=min(ax2,bx2);
		int rty=min(ay2,by2);

		if(rtx-lbx<=0 || rty-lby<=0)return (ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);
		return (ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1)-(rtx-lbx)*(rty-lby);
	}
};