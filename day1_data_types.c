   #define MAX_BUFFER 255
    // Declare second integer, double, and String variables.
    int si;
    double dd;
    char *buff = malloc(MAX_BUFFER);
    if (buff == NULL) {
        printf("Memory error\n");
        return 1;
    }
    // Read and save an integer, double, and String to your variables.
    if ( fgets(buff, MAX_BUFFER, stdin) != NULL ) {
        sscanf(buff, "%d", &si);
        printf("%d\n", i + si);
    }
    if ( fgets(buff, MAX_BUFFER, stdin) != NULL ) {
        sscanf(buff, "%lf", &dd);
        printf("%.1f\n", d + dd);
    }
    if ( fgets(buff, MAX_BUFFER, stdin) != NULL ) {
         printf("%s%s\n", s, buff);
    }
    
    // Print the sum of both integer variables on a new line.
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
