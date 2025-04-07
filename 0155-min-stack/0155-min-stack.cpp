class MinStack {
public:
    void push(int x) {
        if (st.empty())
            st.emplace(x, x);
        else
            st.emplace(x, std::min(x, st.top().second));
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }

private:
    std::stack<std::pair<int, int>> st;  // {value, current_min}
};
