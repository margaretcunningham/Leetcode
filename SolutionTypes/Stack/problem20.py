class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 == 1:
            return False

        stack = []

        for char in s:
            if char == '(':
                stack.append(')')
            elif char == ')':
                if len(stack) == 0:
                    return False
                if stack[-1] != ')' :
                    return False
                stack.pop()
            elif char == '[':
                stack.append(']')
            elif char == ']':
                if len(stack) == 0:
                    return False
                if stack[-1] != ']' :
                    return False
                stack.pop()
            elif char == '{':
                stack.append('}')
            elif char == '}':
                if len(stack) == 0:
                    return False
                if stack[-1] != '}' :
                    return False
                stack.pop()
            
        if len(stack) > 0:
            return False

        return True
