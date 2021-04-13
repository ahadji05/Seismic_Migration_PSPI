# Seismic_Migration_PSPI
Shot-profile prestack depth migration algorithm based on a phase-shift plus interpolation (PSPI) wave propagation method.

### Compilation instructions

From the top directory follow:

` mkdir build `
  
` cd build `

` cmake .. -DMigration_BUILD_BENCH=ON -DMigration_BUILD_EXAMPLES=ON -DMigration_BUILD_UNITTESTS=ON `

` make `
