#version 150

out vec4 outputColor;

uniform vec2 blob_1;
uniform vec2 blob_2;
uniform vec2 blob_3;
vec2 distance_1;
vec2 distance_2;
vec2 distance_3;
float d_length_1;
float d_length_2;
float d_length_3;

void main()
{
    // gl_FragCoord contains the window relative coordinate for the fragment.
    // we use gl_FragCoord.x position to control the red color value.
    // we use gl_FragCoord.y position to control the green color value.
    // please note that all r, g, b, a values are between 0 and 1.

    distance_1 = blob_1 - gl_FragCoord.xy;
    d_length_1 = length(distance_1);

    distance_2 = blob_2 - gl_FragCoord.xy;
    d_length_2 = length(distance_2);

    distance_3 = blob_3 - gl_FragCoord.xy;
    d_length_3 = length(distance_3);

    float r = 100 / d_length_1;
	float g = 100 / d_length_2;
	float b = 100 / d_length_3;
	float a = 1.0;
	outputColor = vec4(r, g, b, a);
}