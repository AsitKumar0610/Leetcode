class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> m_q;
		m_q.push(root);
		vector<double> result;
		while (!m_q.empty())
		{
			double s=0;
			int n=m_q.size();
			for(int i=0;i<n;i++)
			{s+=m_q.front()->val;
			if(m_q.front()->left)m_q.push(m_q.front()->left);
			if(m_q.front()->right)m_q.push(m_q.front()->right);
			m_q.pop();
			}
			s/=n;
			result.push_back(s);
		}
    return result;
    }
};
