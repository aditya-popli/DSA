# 🚀 Detect Cycle in a Linked List

This project implements cycle detection in a singly linked list using **Floyd’s Cycle Detection Algorithm** (also known as the Tortoise and Hare approach).

## 📌 Problem Statement

Given the `head` of a linked list, determine if it contains a cycle. A cycle occurs when a node’s `next` pointer points back to a previous node, forming a loop.

## 💡 Approach

We use two pointers:
- **Slow Pointer** moves one step at a time.
- **Fast Pointer** moves two steps at a time.

If there's a cycle, the fast and slow pointers will eventually meet.

