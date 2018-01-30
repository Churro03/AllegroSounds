#include <allegro5/allegro.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

int main() {

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_SAMPLE *sample = NULL;
	ALLEGRO_SAMPLE *sample2 = NULL;

	al_init();

	al_install_audio();
	al_init_acodec_addon();

	al_reserve_samples(2);

	sample = al_load_sample("dillypickle.wav");
	sample2 = al_load_sample("Respct.wav");

	al_play_sample(sample, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_LOOP, NULL);
	al_play_sample(sample2, 1.0, 0.0, 1.5, ALLEGRO_PLAYMODE_LOOP, NULL);
	al_rest(50);

	al_destroy_display(display);
	al_destroy_sample(sample);
	return 0;

}