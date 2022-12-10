cat /etc/passwd | grep -v '/#'  | awk -F: '{ print $1 }' | sed -n '1~2p' | rev | sort -r  | awk 'NR>='$FT_LINE1'&&NR<='$FT_LINE2 | awk 1 ORS=', ' | sed 's:, $:.:' | tr -d '\n'
