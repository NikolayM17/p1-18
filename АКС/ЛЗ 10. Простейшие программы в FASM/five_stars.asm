name five_stars
; 5 ��������
; ��������� �.�., 11.05.2020
org 100h

mov ah, 09      ; ������� ������ �� �����
mov al, '*'     ; ��������� ������
mov bh, 00      ; �������� 0
mov bl, 070h    ; ������ ����� �� ����� ����
mov cx, 05      ; ����� ����������
int 10h         ; ������� BIOS

ret
