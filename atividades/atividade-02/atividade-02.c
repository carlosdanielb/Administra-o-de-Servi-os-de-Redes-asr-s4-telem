ciscolabvm@ciscolabvm:~$ ssh-keygen -t rsa -b 4096 -C "carlos.brilhante62@aluno.ifce.edu.br"
Generating public/private rsa key pair.
Enter file in which to save the key (/home/ciscolabvm/.ssh/id_rsa):           
/home/ciscolabvm/.ssh/id_rsa already exists.
Overwrite (y/n)? y
Enter passphrase for "/home/ciscolabvm/.ssh/id_rsa" (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /home/ciscolabvm/.ssh/id_rsa
Your public key has been saved in /home/ciscolabvm/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:lt1JpwfdBwePtNCqeEybb0hZU8F6/onvr9FntxrjT8U carlos.brilhante62@aluno.ifce.edu.br
The key's randomart image is:
+--[ED25519 256]--+
|            .o=o.|
|             ++B |
|            o+= +|
|         o.o==...|
|        S+.*++. E|
|       .. O  ....|
|         o o ooo*|
|          . +.++=|
|           . o**o|
+----[SHA256]-----+
ciscolabvm@ciscolabvm:~$ pwd
/home/ciscolabvm
ciscolabvm@ciscolabvm:~$ cd .ssh/
ciscolabvm@ciscolabvm:~/.ssh$ ls -althr
total 36K
-rw-r--r--. 1 ciscolabvm ciscolabvm  12K Jun  9  2023 .authorized_keys.swp
-rw-r--r--. 1 ciscolabvm ciscolabvm  802 Jun  9  2023 authorized_keys
-rw-r--r--. 1 ciscolabvm ciscolabvm  618 Jun 24  2024 config
drwx------. 1 ciscolabvm ciscolabvm  292 Nov  4  2024 ..
-rw-------. 1 ciscolabvm ciscolabvm 3.1K Nov  4  2024 known_hosts.old
-rw-------. 1 ciscolabvm ciscolabvm 3.3K Nov  4  2024 known_hosts
drwxr-xr-x. 1 ciscolabvm ciscolabvm  166 Feb  5  2025 .
-rw-------. 1 ciscolabvm ciscolabvm 3.4K Sep 25 20:59 id_rsa
-rw-r--r--. 1 ciscolabvm ciscolabvm  758 Sep 25 20:59 id_rsa.pub
ciscolabvm@ciscolabvm:~/.ssh$ cat id_rsa.pub 
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAACAQC0UaR8qh2eHzUiyPCnc13r9yslx+BaSGz72WlGc5OZAObP+GeAavpFd+4E2/ZBCTr+VGB3WMeDohBpCG/yw1W3iPD0+gLllRB7DWbEqnE2YX/FQ96Vb/eXG/G3JYeuGWPxlLNZf7nK84zUSOy3uPocETkeCW/raYikjWnNCCNGF/JmassuGX3XX1xZ2MdDVUnvWyGrutYXSkeb+IfgBLYpv47/DJWwWrxzeBYxqH73ShSb7U0gRwbUZOuCaBCkBpfLGCsJbfAOQg1beYVBWjRyKbVSLxOk3bMXamtQx+wB4SWXVYWztorRYjlMYX1xX34NwUI9nN1IWZRSLVQ6ek2vrBNaWt3dKyRjaCgoHdo/+kYBYmdlFnob7EDgjnFUppEijq2wt52Fzldgytn0LqajF5205P7f0W6LJGOStMDUSSGzdAvh+Jps/3AX3ZXj+LUD4PQxifOMENkW7ttiihfLrtwUTsThDBszJvnBV+78kkbpF8smGWTcPOZZCmAbbtfEgHSHG2pgLbOV9GFu63bAz7ay/ByG87VYyQoqv9PeZh5RiLLQRvs2KSsT8qfN2zmihFZJs1DKD02k5ryRZID9RGl5izmEEANHlVtmFIzsGDll914GZWG3bZeIqIWNwxH6PKXCATdfjRRMO8/PmKm/8MT4yTb7U4yvvyCylDvyqw== carlos.brilhante62@aluno.ifce.edu.br
ciscolabvm@ciscolabvm:~/.ssh$ 
ciscolabvm@ciscolabvm:~$ git clone git@github.com:carlosdanielb/ASR-252.git
Cloning into 'ASR-252'...
The authenticity of host 'github.com (4.228.31.150)' can't be established.
ED25519 key fingerprint is SHA256:+DiY3wvvV6TuJJhbpZisF/zLDA0zPMSvHdkr4UvCOqU.
This key is not known by any other names.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added 'github.com' (ED25519) to the list of known hosts.
remote: Enumerating objects: 7, done.
remote: Counting objects: 100% (7/7), done.
remote: Compressing objects: 100% (7/7), done.
Receiving objects: 100% (7/7), done.
remote: Total 7 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
ciscolabvm@ciscolabvm:~$ ls -la
total 16
drwx------. 1 ciscolabvm ciscolabvm 306 Sep 25 21:05 .
drwxr-xr-x. 1 root        root         22 Jul 16  2024 ..
drwxr-xr-x. 1 ciscolabvm ciscolabvm  46 Sep 25 21:05 ASR-252
