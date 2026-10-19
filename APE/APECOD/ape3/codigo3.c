#include <stdio.h>

int main(void) {
    int cantidadDocumentos, cantidadImagenes;
    int cantidadVideos, cantidadProgramas;

    double tamanoDocumentos, tamanoImagenes;
    double tamanoVideos, tamanoProgramas;
    double capacidadDisco;

    double espacioDocumentos, espacioImagenes;
    double espacioVideos, espacioProgramas;
    double totalMB, totalGB, porcentajeUtilizado;

    printf("Cantidad de documentos: ");
    scanf("%d", &cantidadDocumentos);

    printf("Tamano promedio de documentos (MB): ");
    scanf("%lf", &tamanoDocumentos);

    printf("Cantidad de imagenes: ");
    scanf("%d", &cantidadImagenes);

    printf("Tamano promedio de imagenes (MB): ");
    scanf("%lf", &tamanoImagenes);

    printf("Cantidad de videos: ");
    scanf("%d", &cantidadVideos);

    printf("Tamano promedio de videos (MB): ");
    scanf("%lf", &tamanoVideos);

    printf("Cantidad de programas: ");
    scanf("%d", &cantidadProgramas);

    printf("Tamano promedio de programas (MB): ");
    scanf("%lf", &tamanoProgramas);

    printf("Capacidad del disco (GB, mayor que cero): ");
    scanf("%lf", &capacidadDisco);

    espacioDocumentos = cantidadDocumentos * tamanoDocumentos;
    espacioImagenes = cantidadImagenes * tamanoImagenes;
    espacioVideos = cantidadVideos * tamanoVideos;  
    espacioProgramas = cantidadProgramas * tamanoProgramas;

    totalMB = espacioDocumentos + espacioImagenes + espacioVideos + espacioProgramas;
    totalGB = totalMB / 1024.0;

    porcentajeUtilizado = (totalGB / capacidadDisco) * 100.0;

    printf("\nRESULTADOS\n");
    printf("Documentos: %.2f MB\n", espacioDocumentos);
    printf("Imagenes: %.2f MB\n", espacioImagenes);
    printf("Videos: %.2f MB\n", espacioVideos);
    printf("Programas: %.2f MB\n", espacioProgramas);
    printf("Total utilizado: %.2f MB\n", totalMB);
    printf("Total utilizado: %.2f GB\n", totalGB);
    printf("Almacenamiento utilizado: %.2f %%\n",
           porcentajeUtilizado);

    return 0;
}