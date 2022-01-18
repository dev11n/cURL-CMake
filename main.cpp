#include "curl/curl.h"

int main() {

    CURL *curl;
    CURLcode res; // Remove if you don't need it.

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://google.com/");
        res = curl_easy_perform(curl);

        // Received; process "res" the way you want

        /* always cleanup */
        curl_easy_cleanup(curl);
    }
    return 0;
}
