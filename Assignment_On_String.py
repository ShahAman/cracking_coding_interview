# Task-1
def shuffle_string(s: str, indices: list[int]) -> str:
    """
    Shuffles a string based on a given list of indices.

    Args:
        s: The string to be shuffled.
        indices: A list of integers representing the new positions of characters in the shuffled string.

    Returns:
        The shuffled string.

    Time Complexity: O(n)
    Space Complexity: O(n)
    """
    shuffled = [''] * len(s)

    # Loop through the indices and placing characters at their new positions
    for i, idx in enumerate(indices):
        shuffled[idx] = s[i]

    # Join the list into a single string and return
    return ''.join(shuffled)

# Task-2
def find_needle(haystack: str, needle: str) -> int:
    """
    Finds the index of the first occurrence of a needle in haystack.

    Args:
        haystack: The string to search in.
        needle: The substring to search for.

    Returns:
        The index of the first occurrence of needle in haystack, or -1 if not found.

    Time Complexity: O(n * m)
    Space Complexity: O(1) 
    """
    haystack_len = len(haystack)
    needle_len = len(needle)

    # Edge case: If needle is empty, return 0
    if needle_len == 0:
        return 0

    # Iterate through haystack until the remaining length is less than needle length
    for i in range(haystack_len - needle_len + 1):
        # Check if characters in haystack match needle characters
        if haystack[i:i + needle_len] == needle:
            return i

    # If no match found, return -1
    return -1