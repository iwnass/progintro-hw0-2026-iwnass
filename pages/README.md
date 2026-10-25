# Check out solution URL
$ cat solution.txt
YourUsername.github.io
# Ensure the URL exists
$ curl --output /dev/null --silent --head --fail YourGitHubUsername.github.io \
&& echo "URL exists" || echo "URL does not exist"
URL exists