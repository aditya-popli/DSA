# 🔄 Check if a Linked List is a Palindrome

This project implements a C++ solution to check whether a singly linked list is a palindrome.

## 📌 Problem Statement

Given the `head` of a singly linked list, return `true` if it is a palindrome or `false` otherwise.

A palindrome list reads the same forward and backward.

## 💡 Approach

1. **Find the Middle** of the linked list using the slow and fast pointer technique.
2. **Reverse** the second half of the list.
3. **Compare** the values of the first and the reversed second half node by node.
4. Return `true` if all nodes match, otherwise return `false`.

