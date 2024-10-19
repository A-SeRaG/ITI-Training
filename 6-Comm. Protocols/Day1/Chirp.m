clc;
clear;

%% Constants
F1 = 1;      %start freq
F2 = 10;     %end freq
Fs = 100;    %sampling freq
Ts = 1/Fs;   %sampling time
Tf = 10;     %end time
T = 0:Ts:Tf; %time rang

%% Up/Down Chirp
U_chirp = chirp(T, F1, Tf, F2); %Generate up chirp signal
D_chirp = chirp(T, F2, Tf, F1); %Generate down chirp signal

%% Plot up-chirp signal
figure;
subplot(2, 1, 1);
plot(T, U_chirp);
title('Up Chirp Signal');
xlabel('Time');
ylabel('Amplitude');
subplot(2, 1, 2);
spectrogram(U_chirp');
title('Up Chirp Signal Spectrum');

%% Plot down-chirp signal
figure;
subplot(2, 1, 1);
plot(T, D_chirp);
title('Down Chirp Signal');
xlabel('Time');
ylabel('Amplitude');
subplot(2, 1, 2);
spectrogram(D_chirp');
title('Down Chirp Signal Spectrum');